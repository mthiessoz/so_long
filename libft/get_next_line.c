/* ************************************************************************** */
/*	                                                                         */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:35:50 by mthiesso          #+#    #+#             */
/*   Updated: 2022/01/03 18:24:54 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*clean_line(char **line, int check)
{
	char	*tmp;
	char	*result;
	int		i;

	if (*line == NULL || check == -1)
		return (NULL);
	i = nl_finder(*line);
	if (i != -1)
	{
		result = ft_substr(*line, 0, i);
		tmp = ft_substr(*line, i + 1, ft_strlen(*line));
		free(*line);
		*line = tmp;
		if (**line != '\0')
			return (result);
	}
	else
		result = ft_strdup(*line);
	free(*line);
	*line = NULL;
	return (result);
}

int	nl_finder(char *line)
{
	int	i;

	if (!line)
		return (-1);
	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	char			buffer[BUFFER_SIZE + 1];
	static char		*line[1024];
	int				check;
	char			*tmp;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	check = read(fd, buffer, BUFFER_SIZE);
	while (check > 0)
	{
		buffer[check] = '\0';
		if (!line[fd])
			line[fd] = ft_strdup("");
		tmp = ft_strjoin(line[fd], buffer);
		free(line[fd]);
		line[fd] = tmp;
		if (nl_finder(line[fd]) != -1)
			break ;
		check = read(fd, buffer, BUFFER_SIZE);
	}
	return (clean_line(&line[fd], check));
}

/*int	main(int argc, char **argv)
{
	int	fd = open(argv[1], O_RDONLY);
	char	 *retour = get_next_line(fd);
	int	 i = 1;
	(void)argc;
	while (retour != NULL)
	{
	 printf("%i Retour fonction =%s\n",i , retour);
	 //write(1, "/", 1);
	 i++;
	 retour = get_next_line(fd);
	}
	 printf("%i Retour fonction =%s\n",i , retour);
}*/