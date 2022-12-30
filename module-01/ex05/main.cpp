/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:41:36 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/30 17:52:06 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");
}
