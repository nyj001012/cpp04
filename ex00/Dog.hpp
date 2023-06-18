/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:30:39 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:31:40 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_DOG_HPP_
#define CPP04_EX00_DOG_HPP_

# include <iostream>

/**
 * @brief Dog class
 * @details Dog class is a derived class of Animal class.
 * It has a type member variable and makeSound member function.
 */
class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog(void);
  void makeSound(void) const;
};

#endif //CPP04_EX00_DOG_HPP_
