/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:10 by yena              #+#    #+#             */
/*   Updated: 2023/06/19 06:48:35 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_AAnimal_HPP
#define CPP04_AAnimal_HPP

# include <iostream>

/**
 * @brief AAnimal class
 * @details AAnimal class is a base class of Cat and Dog class.
 * It has a type member variable and makeSound member function.
 * pure_virtual_function is a pure virtual function.
 */
class AAnimal {
 protected:
  std::string type;

 public:
  AAnimal(void);
  AAnimal(const AAnimal &other);
  AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal(void);
  virtual void makeSound(void) const;
  std::string getType(void) const;
  virtual void pure_virtual_function(void) const = 0;
};

#endif //CPP04_AAnimal_HPP
