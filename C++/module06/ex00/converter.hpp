/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:07:21 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/07 18:12:18 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>


class ScalarConverter{
  public:
  static void   convert(const std::string& input);
  
  private:
  ScalarConverter();
  ~ScalarConverter();
};