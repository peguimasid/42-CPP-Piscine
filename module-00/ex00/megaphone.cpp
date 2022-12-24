/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:02 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/24 18:39:33 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  if (argc == 1) {
    cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return 0;
  };
  for (int i = 1; i < argc; i++) {
    string str = argv[i];
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
  }
  cout << endl;
  return 0;
}
