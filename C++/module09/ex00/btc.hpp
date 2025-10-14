/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:51:27 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/14 09:51:53 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <fstream>

struct ResultData {
    std::string inputValue;
    double      calculatedValue;
};

class bitcoin {
private:
    std::map<std::string, std::string>      dataCSV;
    std::multimap<std::string, std::string> dataInput;
    std::multimap<std::string, ResultData>  dataResult;

public:
    bitcoin() {}
    ~bitcoin() {}

    void read_DB(const std::string &filename, char separator);
    void calculate();

    void display_DB_CSV() {
        for (std::map<std::string, std::string>::iterator it = dataCSV.begin();
             it != dataCSV.end(); ++it) {
            std::cout << it->first << " => " << it->second << std::endl;
        }
    }

    void display_DB_Input() {
        for (std::multimap<std::string, std::string>::iterator it = dataInput.begin();
             it != dataInput.end(); ++it) {
            std::cout << it->first << " => " << it->second << std::endl;
        }
    }

    void display_result() {
        for (std::multimap<std::string, ResultData>::iterator it = dataResult.begin();
             it != dataResult.end(); ++it) {
            std::cout << it->first << " => " << it->second.inputValue
                      << " = " << it->second.calculatedValue << "\n";
        }
    }
};
