/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:03:28 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/01 21:51:33 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>
using  namespace std;


int main(int ac, char **av)
{
    string str;
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
            cout << av[i];
        cout << endl;
        return (0);
    }
    cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    cout << endl;
    return (0);
}