/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:C++/module03/ex02/scavtrap.hpp
/*   Created: 2025/04/21 15:22:58 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 15:38:56 by mmouaffa         ###   ########.fr       */
=======
/*   Created: 2025/04/01 20:03:28 by mmouaffa          #+#    #+#             */
<<<<<<< HEAD:C++/module03/ex02/scavtrap.hpp
/*   Updated: 2025/06/06 16:02:12 by mehdi            ###   ########.fr       */
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex00/megaphone.cpp
=======
/*   Updated: 2025/06/11 15:11:21 by mehdi            ###   ########.fr       */
>>>>>>> 096af2c (new exercices + corrected exercices):C++/module00/ex00/megaphone.cpp
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
<<<<<<< HEAD:C++/module03/ex02/scavtrap.hpp
<<<<<<< HEAD:C++/module03/ex02/scavtrap.hpp
#include <string>
#include "claptrap.hpp"

class Scavtrap : public Claptrap{
    public:
    Scavtrap(std::string name);
    ~Scavtrap();
    void    attack(const std::string &target);
    void    guardgate();
    
};

#endif
=======
=======
#include <cctype>
>>>>>>> 096af2c (new exercices + corrected exercices):C++/module00/ex00/megaphone.cpp

int main(int argc, char* argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            for (int j = 0; argv[i][j]; ++j)
                std::cout << (char)std::toupper(argv[i][j]);
            if (i < argc - 1)
                std::cout << ' ';
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
<<<<<<< HEAD:C++/module03/ex02/scavtrap.hpp
    return (0);
}
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex00/megaphone.cpp
=======
    }
    return 0;
}
>>>>>>> 096af2c (new exercices + corrected exercices):C++/module00/ex00/megaphone.cpp
