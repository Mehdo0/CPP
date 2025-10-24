/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:40:19 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/19 15:03:18 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "form.hpp"

int main() {

    try{
        Bureaucrat a("Alice", 42);
        std::cout << a << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat b("Bob", 0);
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat c("Charle", 151);
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat d("Didier", 1);
        std::cout << d << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat e("Emilien", 150);
        std::cout << e << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    std::cout<< "\n=========================\n";
    std::cout<< "    AJOUT : TESTS FORM   \n";
    std::cout<< "=========================\n\n";

    try {
        Form f1("FormOK", 50, 30);
        Bureaucrat s1("SignerOK", 45);
        f1.beSigned(s1);
        std::cout << "Signature OK: " << f1.GetName()
                  << " par " << s1.GetName() << std::endl;
        std::cout << f1 << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (FormOK): " << e.what() << std::endl;
    }

    try {
        Form f2("Need50", 50, 30);
        Bureaucrat low("LowGuy", 60);
        f2.beSigned(low);
        std::cout << "NE DEVRAIT PAS S’AFFICHER" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception attendue (signature refusée): " << e.what() << std::endl;
    }

    try {
        Form f3("EdgeTop", 1, 1);
        Bureaucrat top("Top", 1);
        f3.beSigned(top);
        std::cout << "Top a signé " << f3.GetName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception (EdgeTop): " << e.what() << std::endl;
    }

    try {
        Form bad1("BadSignHigh", 0, 10);
        std::cout << "NE DEVRAIT PAS S’AFFICHER" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception attendue (Form GSign=0): " << e.what() << std::endl;
    }

    try {
        Form bad2("BadExecLow", 10, 151);
        std::cout << "NE DEVRAIT PAS S’AFFICHER" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception attendue (Form GEx=151): " << e.what() << std::endl;
    }

    return 0;
}
