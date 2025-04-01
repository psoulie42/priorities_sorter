#include "src/utils/libft/libft.h"

typedef struct s_idea
{
	char			*content;
	struct s_idea	*next;
}				t_idea;

// idea.c
t_idea	*first_idea();
t_idea	*new_idea(char *content);
void	ft_ideaclear(t_idea *idea);
