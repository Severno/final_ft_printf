#include "../includes/ft_printf.h"

long long int check_convention(t_param *param)
{
	if (ft_strstr(param->flags, "lld"))
		return (long long int)param->arg_value;
	else if (ft_strstr(param->flags, "ld"))
		return (long int)param->arg_value;
	else if (ft_strstr(param->flags, "hhd"))
		return (char)param->arg_value;
	else if (ft_strstr(param->flags, "hd"))
		return (short int)param->arg_value;
	else if (ft_strstr(param->flags, "d"))
		return (int)param->arg_value;
	else if (ft_strstr(param->flags, "lli"))
		return (long long int)param->arg_value;
	else if (ft_strstr(param->flags, "li"))
		return (long int)param->arg_value;
	else if (ft_strstr(param->flags, "hhi"))
		return (char)param->arg_value;
	else if (ft_strstr(param->flags, "hi"))
		return (short int)param->arg_value;
	else if (ft_strstr(param->flags, "i"))
		return (int)param->arg_value;
	return 0;
}
unsigned long long int check_un_convention(t_param *param)
{
	if (ft_strstr(param->flags, "llo"))
		return (unsigned long long int)param->arg_value;
	else if (ft_strstr(param->flags, "lo"))
		return (unsigned long int)param->arg_value;
	else if (ft_strstr(param->flags, "hho"))
		return (unsigned char)param->arg_value;
	else if (ft_strstr(param->flags, "ho"))
		return (short int)param->arg_value;
	else if (ft_strstr(param->flags, "o"))
		return (unsigned int)param->arg_value;
	else if (ft_strstr(param->flags, "llu"))
		return (unsigned long long int)param->arg_value;
	else if (ft_strstr(param->flags, "lu"))
		return (unsigned long int)param->arg_value;
	else if (ft_strstr(param->flags, "hhu"))
		return (unsigned char)param->arg_value;
	else if (ft_strstr(param->flags, "hu"))
		return (unsigned short int)param->arg_value;
	else if (ft_strstr(param->flags, "u"))
		return (unsigned int)param->arg_value;
	else if (ft_strstr(param->flags, "llx"))
		return (unsigned long long int)param->arg_value;
	else if (ft_strstr(param->flags, "lx"))
		return (unsigned long int)param->arg_value;
	else if (ft_strstr(param->flags, "hhx"))
		return (unsigned char)param->arg_value;
	else if (ft_strstr(param->flags, "hx"))
		return (unsigned short int)param->arg_value;
	else if (ft_strstr(param->flags, "x"))
		return (unsigned int)param->arg_value;
	else if (ft_strstr(param->flags, "llX"))
		return (unsigned long long int)param->arg_value;
	else if (ft_strstr(param->flags, "lX"))
		return (unsigned long int)param->arg_value;
	else if (ft_strstr(param->flags, "hhX"))
		return (unsigned char)param->arg_value;
	else if (ft_strstr(param->flags, "hX"))
		return (unsigned short int)param->arg_value;
	else if (ft_strstr(param->flags, "X"))
		return (unsigned int)param->arg_value;
	return 0;
}