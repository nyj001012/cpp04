/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:46:18 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:52:10 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  std::cout << F_WHITE << "[ Brain ] " << FB_DEFAULT
            << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
  std::cout << F_WHITE << "[ Brain ] " << FB_DEFAULT
            << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = other.ideas[i];
  }
}

Brain::~Brain() {
  std::cout << F_WHITE << "[ Brain ] " << FB_DEFAULT
            << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << F_WHITE << "[ Brain ] " << FB_DEFAULT
            << "Brain assignation operator called" << std::endl;
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = other.ideas[i];
  }
  return (*this);
}

std::string Brain::getIdea(int idx) const {
  return (this->ideas[idx]);
}

void Brain::setIdea(int idx, std::string idea) {
  this->ideas[idx] = idea;
}
