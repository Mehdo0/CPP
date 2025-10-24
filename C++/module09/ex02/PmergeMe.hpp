/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:09:41 by mehdi             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/14 15:25:04 by mmouaffa         ###   ########.fr       */
=======
/*   Updated: 2025/10/23 10:56:18 by mehdi            ###   ########.fr       */
>>>>>>> 5a97a75 (;)
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <stdexcept>
<<<<<<< HEAD


std::vector<int> sorting_algo(std::vector<int> &list);
std::vector<int> parseAndValidateInput(int argc, char **argv);
=======
#include <utility> 
#include <algorithm> 
#include <cmath> 
#include <ctime>
#include <iomanip>

std::vector<int> parseAndValidateInput(int argc, char **argv);
void generateJacobsthalIndices(std::vector<size_t>& sequence, size_t num_losers);
void fordJohnsonSort(std::vector<int>& list);
void fordJohnsonSort(std::deque<int>& list);
void generateJacobsthalIndices(std::deque<size_t>& sequence, size_t num_losers);
>>>>>>> 5a97a75 (;)
