/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:07:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/19 00:00:31 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
  std::cout << "===================== Constructor =====================" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  delete j;
  delete i;
  std::cout << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
  Animal farm = new Animal[10];
  for (int i = 0; i < 5; i++) {
    farm[i] = new Cat();
    for (int j = 0; j < 100; j++) {
      farm[i]->setIdea(j, "I want a fish!");
    }
  }
  for (int i = 5; i < 10; i++) {
    farm[i] = new Dog();
    for (int j = 0; j < 100; j++) {
      farm[i]->setIdea(j, "I want a bone!");
    }
  }
  std::cout << std::endl;
  std::cout << "======================== Brain ========================" << std::endl;
  std::cout << "Cat's 1st idea of brain: " << farm[0]->getIdea(0) << std::endl;
  std::cout << "Dog's 1st idea of brain: " << farm[5]->getIdea(0) << std::endl;
  return (0);
}