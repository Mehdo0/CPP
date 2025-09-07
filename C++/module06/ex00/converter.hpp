/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:07:21 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/06 21:00:18 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cctype>   // std::isprint
#include <cmath>    // std::isfinite

class ScalarConverter{
  public:
  static void   convert(const std::string& input);
  
  private:
  ScalarConverter();
  ~ScalarConverter();
};