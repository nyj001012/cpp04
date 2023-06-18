/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:07:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/19 07:02:47 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * @brief Basic test
 * @details This test is for checking basic constructor, destructor
 */
void basicTest(void) {
  std::cout << "\033[0;32mBasic Test\033[0m" << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  delete j;
  delete i;
  std::cout << std::endl;
}

/**
 * @brief Create farm
 * @details This function creates farm
 * @return Animal** farm
 */
Animal **createFarm(void) {
  std::cout << "\033[0;32mCreate Test\033[0m" << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
  Animal **farm = new Animal *[10];
  for (int i = 0; i < 5; i++) {
    farm[i] = new Cat();
    Cat *cat = static_cast<Cat *>(farm[i]);
    cat->setIdea(i, "I want a fish!");
  }
  for (int i = 5; i < 10; i++) {
    farm[i] = new Dog();
    Dog *dog = static_cast<Dog *>(farm[i]);
    dog->setIdea(i, "I want a bone!");
  }
  std::cout << std::endl;
  return (farm);
}

/**
 * @brief Make sound and Brain test
 * @param Animal *farm[10]
 */
void functionTest(Animal *farm[10]) {
  std::cout << "\033[0;32mMakeSound & Brain Test\033[0m" << std::endl;
  std::cout << "====================== MakeSound ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    farm[i]->makeSound();
  }
  std::cout << "======================== Brain ========================" << std::endl;
  Cat *cat = static_cast<Cat *>(farm[0]);
  Dog *dog = static_cast<Dog *>(farm[5]);
  std::cout << "A Cat's idea: " << cat->getIdea(0) << std::endl;
  std::cout << "A Dog's idea: " << dog->getIdea(5) << std::endl;
  std::cout << std::endl;
  std::cout << "A Cat and A Dog changed it's idea!\n" << std::endl;
  cat->setIdea(0, "I need to sleep...");
  dog->setIdea(5, "Let's go for a walk!!!");
  std::cout << "A Cat's idea: " << cat->getIdea(0) << std::endl;
  std::cout << "A Dog's idea: " << dog->getIdea(5) << std::endl;
  std::cout << std::endl;
}

/**
 * @brief Destroy farm
 * @details This function destroys farm
 * @param farm
 */

void destroyFarm(Animal *farm[10]) {
  std::cout << "\033[0;32mEnd of Test\033[0m" << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    delete farm[i];
  }
  delete[] farm;
  std::cout << std::endl;
}

int main(void) {
  basicTest();
  Animal **farm = createFarm();
  functionTest(farm);
  destroyFarm(farm);
  return (0);
}