/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:04:12 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 15:31:48 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "replaceString.hpp"

int main (int ac, char **av) {
    if (ac != 4) {
        std::cerr << "At least 3 arguments needed" << std::endl;
        return 1;
    }

    std::string filename;
    std::string s1;
    std::string s2;

    filename = av[1];
    s1 = av[2];
    s2 = av[3];

    if(s1.empty()) {
        std::cerr << "S1 cant be empty" << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str()); 
    if(!inputFile) {
        std::cerr << "Can not to open" << filename << std::endl;
        return 1;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Can not create output file" << std:: endl;
        return 1;
    }

    ReplaceString::replaceString(inputFile, outputFile, s1, s2);

    inputFile.close();
    outputFile.close();
    return 0;
}