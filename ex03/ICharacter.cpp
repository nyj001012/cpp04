/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:11:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:41:48 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter Constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other) {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

ICharacter &ICharacter::operator=(const ICharacter &other) {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter Assignation Operator called" << std::endl;
  return (*this);
}

ICharacter::~ICharacter(void) {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter Destructor called" << std::endl;
}

/**
 * @brief Get name of ICharacter
 * @return std::string
 */
std::string const &ICharacter::getName(void) const {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter getName called" << std::endl;
  return (this->_name);
}

/**
 * @brief Equip materia
 * @param materia
 */
void ICharacter::equip(AMateria *materia) {
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter equip called" << std::endl;
  for (int i = 0; i < SLOT_MAX; i++) {
    if (this->_materia[i] == NULL) {
      this->_materia[i] = materia;
      return ;
    }
  }
  std::cout << F_RED << "[ ICharacter ] " << FB_DEFAULT
            << "Your inventory is full!" << std::endl;
}

/**
 * @brief Unequip materia
 * @param idx
 */
void ICharacter::unequip(int idx) {
  if (this->_mataria[idx] == NULL) {
    std::cout << F_RED << "[ ICharacter ] " << FB_DEFAULT
              << "The inventory slot is empty!" << std::endl;
    return ;
  }
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter unequip called" << std::endl;
  this->_materia[idx] = NULL;
}

/**
 * @brief Use materia
 * @param idx
 * @param target
 */
void ICharacter::use(int idx, ICharacter &target) {
  if (this->_mataria[idx] == NULL) {
    std::cout << F_RED << "[ ICharacter ] " << FB_DEFAULT
              << "You can not use nothing!" << std::endl;
    return ;
  }
  std::cout << F_YELLOW << "[ ICharacter ] " << FB_DEFAULT
            << "ICharacter use called" << std::endl;
  this->_materia[idx]->use(target);
}