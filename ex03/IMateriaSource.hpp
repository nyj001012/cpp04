/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:14:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:50:41 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_IMateriaSource_HPP_
#define CPP04_EX03_IMateriaSource_HPP_

# include <iostream>
# include "AMateria.hpp"
# include "font.hpp"

/**
 * @brief MateriaSource interface.
 * @details This interface has only pure virtual functions.
 */
class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif //CPP04_EX03_IMateriaSource_HPP_
