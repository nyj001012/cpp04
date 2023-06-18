/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:10 by yena              #+#    #+#             */
/*   Updated: 2023/06/19 00:25:01 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

# include <iostream>

/**
 * @brief Animal class
 * @details Animal class is a base class of Cat and Dog class.
 * It has a type member variable and makeSound member function.
 */
class Animal {
 protected:
  std::string type;

 public:
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal(void);
  virtual void makeSound(void) const;
  std::string getType(void) const;
};

#endif //CPP04_ANIMAL_HPP
