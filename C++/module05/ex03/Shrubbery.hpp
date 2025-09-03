/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shrubbery.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:36:34 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/03 10:41:51 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "aform.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string target;
public:
    // Constructeurs / destructeur
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif