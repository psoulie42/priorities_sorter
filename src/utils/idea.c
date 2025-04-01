#include "../../priorities_sorter.h"

t_idea	*first_idea()
{
	char	*line;
	t_idea	*idea;

	ft_printf("Idea n°%i: ", 1);
	line = get_next_line(0);
	if (ft_strcmp(line, "END") == 10)
		return (NULL);
	idea = new_idea(line);
	free(line);
	return (idea);
}

t_idea	*new_idea(char *content)
{
	t_idea	*idea;

	idea = malloc(sizeof(t_idea));
	idea->content = ft_strdup(content);
	idea->next = NULL;
	return (idea);
}

void	ft_ideaclear(t_idea *idea)
{
	t_idea	*next;

	while (idea)
	{
		next = idea->next;
		free(idea->content);
		free(idea);
		idea = next;
	}
}
