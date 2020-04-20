/*
 * This project is derived from the CYPRESS FX3 Development Kit project, "C++ Streamer".  It can be used to collect RAW data from a RASDR device.
  The Cypress program, "C++ Streamer" was useful for evaluating USB2/USB3 performance of the FX3 chips.  The original program source is provided at:
  "C:\Program Files\Cypress\EZ-USB FX3 SDK\1.3\application\cpp\streamer".
 *
 *  Created on: 22-Feb-2020
 *      Author: Criticalriver
 */

#pragma once

/**
Function for retrieving RAW Data::
Author:Anji
*/
struct UPDATEGATT {
  /**
    Discover all GATT Database attributes
  */
  void update_gatt_attributes();
};
