/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:07:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:57:17 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
  std::cout << "===================== Constructor =====================" << std::endl;
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  const WrongAnimal *wrong_animal = new WrongCat();

  std::cout << std::endl;
  std::cout << "======================= GetType =======================" << std::endl;
  std::cout << "Dog's type is " << j->getType() << std::endl;
  std::cout << "Cat's type is " << i->getType() << " " << std::endl;
    std::cout << "WrongCat's type is " << wrong_animal->getType() << " " << std::endl;
  std::cout << std::endl;
  std::cout << "====================== MakeSound ======================" << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  wrong_animal->makeSound();
  std::cout << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  delete meta;
  delete j;
  delete i;
  delete wrong_animal;
  return (0);
}