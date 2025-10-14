/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:36:08 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/13 10:17:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

static void append(std::stack<int>& pile, char operateur) {
    int num1 = pile.top();
    pile.pop();
    int num2 = pile.top();
    pile.pop();
    int result;

    if (operateur == '+') result = num2 + num1;
    else if (operateur == '-') result = num2 - num1;
    else if (operateur == '*') result = num2 * num1;
    else if (operateur == '/') result = num2 / num1;
    else {
        throw operateur;
        return;
    }

    pile.push(result);
}

int resolve(char *operation) {
    std::stack<int> pile;
    for (int i = 0; operation[i]; i++) {
        if (isdigit(operation[i])) {
            pile.push(operation[i] - '0');
        }
        else if (operation[i] == '+' || operation[i] == '-' ||
                 operation[i] == '*' || operation[i] == '/') {
            append(pile, operation[i]);
        }
        else if (operation[i] == ' ') {
            continue;
        }
        else {
            throw operation[i];
        }
    }
    return pile.top();
}