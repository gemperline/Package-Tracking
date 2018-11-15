#pragma once
//
//  PackageTracking.h
//  Project2
//
//  Created by Adam Gemperline, Matthew Quinlan, & Alex Feldman on 2/13/18.
//  Copyright © 2018 Gemperline, Quinlan, Feldman. All rights reserved.
//

#ifndef ShippingStatus_h
#define ShippingStatus_h

#pragma once

#include <string>
using namespace std;

class ShippingStatus {
public:
	ShippingStatus();
	ShippingStatus(const string& status, const string& location, const time_t& timeUpdated);

	string m_getStatus();
	string m_getLocation();
	time_t m_getTime();

private:
	string package_status;
	string package_location;
	time_t timestamp;
};


#endif
