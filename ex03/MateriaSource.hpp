/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:19:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:37:58 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_MATERIASOURCE_HPP_
#define CPP04_EX03_MATERIASOURCE_HPP_

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "font.hpp"

class MateriaSource : public IMateriaSource {
 private:
  AMateria *_materia[4];

 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource &other);
  MateriaSource &operator=(const MateriaSource &other);
  ~MateriaSource(void);
  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &type);
};

#endif //CPP04_EX03_MATERIASOURCE_HPP_
