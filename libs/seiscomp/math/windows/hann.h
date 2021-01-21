/***************************************************************************
 * Copyright (C) gempa GmbH                                                *
 * All rights reserved.                                                    *
 * Contact: gempa GmbH (seiscomp-dev@gempa.de)                             *
 *                                                                         *
 * GNU Affero General Public License Usage                                 *
 * This file may be used under the terms of the GNU Affero                 *
 * Public License version 3.0 as published by the Free Software Foundation *
 * and appearing in the file LICENSE included in the packaging of this     *
 * file. Please review the following information to ensure the GNU Affero  *
 * Public License version 3.0 requirements will be met:                    *
 * https://www.gnu.org/licenses/agpl-3.0.html.                             *
 *                                                                         *
 * Other Usage                                                             *
 * Alternatively, this file may be used in accordance with the terms and   *
 * conditions contained in a signed written agreement between you and      *
 * gempa GmbH.                                                             *
 ***************************************************************************/


#ifndef SEISCOMP_MATH_WINDOWS_HANN_H
#define SEISCOMP_MATH_WINDOWS_HANN_H


#include "../windowfunc.h"


namespace Seiscomp {
namespace Math {


template <typename TYPE>
class SC_SYSTEM_CORE_API HannWindow : public WindowFunc<TYPE> {
	protected:
		virtual void process(int n, TYPE *inout, double left = 0.5, double right = 0.5) const override;
};


}
}


#endif
