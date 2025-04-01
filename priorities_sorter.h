#include "src/utils/libft/libft.h"

typedef struct s_idea
{
	char			*content;
	struct s_idea	*next;
}				t_idea;

// priorities_sorter.c
t_idea	*get_ideas();

// idea.c
t_idea	*first_idea();
t_idea	*new_idea(char *content);
void	ft_ideaclear(t_idea *idea);
