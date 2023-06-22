/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:30:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:24:43 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_DOG_HPP_
#define CPP04_EX00_DOG_HPP_

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

/**
 * @brief Dog class
 * @details Dog class is a derived class of AAnimal class.
 * It has a type, brain member variable and makeSound member function.
 */
class Dog : public AAnimal {
 private:
  Brain *brain;

 public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog(void);
  void makeSound(void) const;
  std::string getType(void) const;
  std::string getIdea(int idx) const;
  void setIdea(int idx, std::string idea);
};

#endif //CPP04_EX00_DOG_HPP_
