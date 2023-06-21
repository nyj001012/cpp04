/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:09:32 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:10:30 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_CURE_HPP_
#define CPP04_EX03_CURE_HPP_

/**
 * @brief Cure class
 * @details This class is a derived class from AMateria class.
 */
class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure &other);
  Cure &operator=(const Cure &other);
  ~Cure(void);
  void use(ICharacter &target);
  AMateria *clone() const;
};

#endif //CPP04_EX03_CURE_HPP_
