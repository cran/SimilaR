/*    SimilaR package for R
 *    Copyright (C) 2018 M. Bartoszuk, M. Gagolewski
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */   

#pragma once
#include "pdgcomparator.h"
#include "common.h"
#include <vector>
#include <map>
#include <list>
#include "defs.h"
#include "graphUtils.h"
#include <unordered_map>

class PDGKernelComparator : public PDGComparator
{
protected:
    int h;
    PDGKernelComparator(int h) : h(h){
    }

    double calculateK(double mul, double len1, double len2)
    {
      return mul/len1;
    }

public:
    virtual vector<double> compare(GraphType& g1, GraphType& g2,
                                   bool isSymmetric) = 0;
};