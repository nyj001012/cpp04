/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:08:08 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:43:36 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_ICE_HPP_
#define CPP04_EX03_ICE_HPP_

# include <iostream>
# include "AMateria.hpp"
# include "font.hpp"

/**
 * @brief Ice class
 * @details This class is a derived class from AMateria class.
 */
class Ice : public AMateria {
 public:
  Ice(void);
  Ice(const Ice &other);
  Ice &operator=(const Ice &other);
  ~Ice(void);
  void use(ICharacter &target);
  AMateria *clone() const;
};

#endif //CPP04_EX03_ICE_HPP_
