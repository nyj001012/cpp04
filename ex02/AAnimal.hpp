/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:23:45 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:11:35 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_AAnimal_HPP
#define CPP04_AAnimal_HPP

# include <iostream>
# include "font.hpp"

/**
 * @brief AAnimal class
 * @details AAnimal class is a base class of Cat and Dog class.
 * It has a type member variable and makeSound member function.
 */
class AAnimal {
 protected:
  std::string _type;

 public:
  AAnimal(void);
  AAnimal(const AAnimal &other);
  AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal(void) = 0;                  ///< should override
  virtual void makeSound(void) const = 0;      ///< should override
  virtual std::string getType(void) const = 0; ///< should override
};

#endif //CPP04_AAnimal_HPP
