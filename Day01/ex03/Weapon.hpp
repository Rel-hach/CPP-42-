/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:53 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 02:54:16 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

using std::string;
using std::cout;

class Weapon
{
    private:
    string _type;
    public:
    Weapon(std::string name);
    ~Weapon();
    const std::string &getType();
    void        setType(std::string type);
};

#endif 