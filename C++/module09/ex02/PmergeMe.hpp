/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:09:41 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/14 15:25:04 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>


std::vector<int> sorting_algo(std::vector<int> &list);
std::vector<int> parseAndValidateInput(int argc, char **argv);