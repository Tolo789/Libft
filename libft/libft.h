/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmutti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:58:35 by cmutti            #+#    #+#             */
/*   Updated: 2015/11/24 09:59:12 by cmutti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
size_t				ft_strlen(const char *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strdup(const char *s1);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_puterror(int id);
int					get_next_line(int const fd, char **line);
int					ft_pow(int base, int power);
unsigned int		ft_uipow(unsigned int base, int power);
void				ft_upstr(char **str);
int					ft_printf(const char *format, ...);
int					ft_abs(int nbr);
int					ft_sqr(int nbr);
unsigned int		ft_uisqr(unsigned int nbr);

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_utoa(unsigned int nbr);
char				*ft_ftoa(double nbr);
char				*ft_lftoa(long double nbr);
char				*ft_ctoa(char c);
char				*ft_ltoa(long nbr);
char				*ft_lltoa(long long nbr);
char				*ft_ustoa(unsigned short nbr);
char				*ft_uctoa(unsigned char nbr);
char				*ft_uitoa(unsigned int nbr);
char				*ft_ultoa(unsigned long nbr);
char				*ft_ulltoa(unsigned long long nbr);
char				*ft_imtoa(intmax_t nbr);
char				*ft_uimtoa(uintmax_t nbr);
char				*ft_sttoa(size_t nbr);
char				*ft_ssttoa(ssize_t nbr);
char				*ft_itoa_base(int nbr, int base);
char				*ft_uitoa_base(unsigned int nbr, int base);
char				*ft_ustoa_base(unsigned short nbr, int base);
char				*ft_uctoa_base(unsigned char nbr, int base);
char				*ft_ultoa_base(unsigned long nbr, int base);
char				*ft_ulltoa_base(unsigned long long nbr, int base);
char				*ft_sttoa_base(size_t nbr, int base);
char				*ft_ltoa_base(long nbr, int base);
char				*ft_uimtoa_base(uintmax_t nbr, int base);

#endif
