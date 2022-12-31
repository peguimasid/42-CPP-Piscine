/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:41:36 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/31 17:25:33 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
  Harl harl;

  std::cout << "DEBUG: " << std::endl;
  harl.complain("DEBUG");
  std::cout << "INFO: " << std::endl;
  harl.complain("INFO");
  std::cout << "WARNING: " << std::endl;
  harl.complain("WARNING");
  std::cout << "ERROR: " << std::endl;
  harl.complain("ERROR");
  std::cout << "NOT EXISTENT: " << std::endl;
  harl.complain("BLABLA");
}
