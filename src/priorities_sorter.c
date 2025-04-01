#include "../priorities_sorter.h"

void	print_ideas(t_idea *ideas)
{
	int	i;

	i = 1;
	while (ideas)
	{
		ft_printf("%i: %s", i, ideas->content);
		ideas = ideas->next;
		i++;
	}
}

t_idea	*get_ideas()
{
	t_idea	*idea;
	t_idea	*save;
	char	*line;
	int		i;

	i = 2;
	idea = first_idea();
	save = idea;
	while (1)
	{
		ft_printf("Idea n°%i: ", i);
		line = get_next_line(0);
		if (ft_strcmp(line, "END") == 10)
			break ;
		idea->next = new_idea(line);
		idea = idea->next;
		free(line);
		i++;
	}
	return (save);
}

int	main()
{
	t_idea	*ideas;

	ideas = get_ideas();
	print_ideas(ideas);
	ft_ideaclear(ideas);
	return (0);
}
