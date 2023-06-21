/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:14:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:30:43 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource Constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &other) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource Assignation Operator called" << std::endl;
  return (*this);
}

~IMateriaSource(void) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource Destructor called" << std::endl;
}

/**
 * @brief Learn materia
 * @param materia
 */
void IMateriaSource::learnMateria(AMateria *materia) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource learnMateria called" << std::endl;
  int i = 0;
  while (this->_materia[i] != NULL)
    i++;
  this->_materia[i] = materia;
}

/**
 * @brief Create materia
 * @param type
 * @return AMateria*
 */
AMateria *IMateriaSource::createMateria(std::string const &type) {
  std::cout << F_GREEN << "[ IMateriaSource ]" << FB_DEFAULT
            << "IMateriaSource createMateria called" << std::endl;
  int i = 0;
  while (this->_materia[i] != NULL) {
    if (this->_materia[i]->getType() == type)
      return (this->_materia[i]->clone());
    i++;
  }
  return (0);
}
