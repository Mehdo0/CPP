/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:03:50 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/18 14:39:07 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Intern.hpp"

int main() {
    Intern intern;

    // Cas valides
    AForm* f1 = intern.makeForm("robotomy request", "Bender");
    AForm* f2 = intern.makeForm("shrubbery creation", "garden");
    AForm* f3 = intern.makeForm("presidential pardon", "Arthur Dent");

    // Cas invalides
    AForm* f4 = intern.makeForm("unknown form", "Nobody");
    AForm* f5 = intern.makeForm("Robotomy Request", "CaseSensitive");

    if (f1) delete f1;
    if (f2) delete f2;
    if (f3) delete f3;
    if (f4) delete f4;
    if (f5) delete f5;

    return 0;
}
