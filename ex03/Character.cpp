/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:11:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 22:04:36 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "constructor called" << std::endl;
  for (int i = 0; i < SLOT_MAX; i++)
    this->_inventory[i] = NULL;
}

Character::Character(const Character &other) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "copy constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Character::Character(const std::string &name) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "parameterised constructor called" << std::endl;
  this->_name = name;
  for (int i = 0; i < SLOT_MAX; i++)
    this->_inventory[i] = NULL;
}

Character &Character::operator=(const Character &other) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "assignation operator called" << std::endl;
  this->_name = other._name;
  for (int i = 0; i < SLOT_MAX; i++) {
    if (this->_inventory[i] != NULL)
      delete this->_inventory[i];
    this->_inventory[i] = other._inventory[i]->clone();
  }
  return (*this);
}

Character::~Character(void) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "destructor called" << std::endl;
}

/**
 * @brief Get name of Character
 * @return std::string
 */
std::string const &Character::getName(void) const {
  return (this->_name);
}

/**
 * @brief Equip materia
 * @param materia
 */
void Character::equip(AMateria *materia) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << this->_name << " equips " << materia->getType() << std::endl;
  for (int i = 0; i < SLOT_MAX; i++) {
    if (this->_inventory[i] == NULL) {
      this->_inventory[i] = materia;
      return;
    }
  }
  std::cout << F_RED << "[ Character ] " << FB_DEFAULT
            << this->_name << "'s inventory is full!" << std::endl;
}

/**
 * @brief Unequip materia
 * @param idx
 */
void Character::unequip(int idx) {
  if (idx < 0 || idx > 3) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << "index out of range" << std::endl;
    return;
  }
  if (this->_inventory[idx] == NULL) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << this->_name << "'s inventory slot is empty!" << std::endl;
    return;
  }
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << this->_name << "unequips"
            << this->_inventory[idx]->getType() << std::endl;
  this->_inventory[idx] = NULL;
}

/**
 * @brief Use materia
 * @param idx
 * @param target
 */
void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || idx > 3) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << "index out of range" << std::endl;
    return;
  }
  if (this->_inventory[idx] == NULL) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << "You can not use nothing!" << std::endl;
    return;
  }
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << this->_name << " use "
            << this->_inventory[idx]->getType() << std::endl;
  this->_inventory[idx]->use(target);
}