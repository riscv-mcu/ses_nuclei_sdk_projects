.. _design_board_gd32vf103v_rvstar:

GD32VF103V RV-STAR Kit
======================

.. _design_board_gd32vf103v_rvstar_overview:

Overview
--------

This GD32VF103V RV-STAR Kit is an arduino compatiable board from Nuclei
using GD32VF103VBT6 as main MCU.

.. _figure_design_board_gd32vf103v_rvstar_1:

.. figure:: /asserts/images/gd32vf103v_rvstar_board.jpg
    :width: 80 %
    :align: center
    :alt: GD32VF103V RV-STAR Board

    GD32VF103V RV-STAR Board

Click `GD32VF103V RV-STAR Development Kit`_ to access the documents
of this board.

Click online `RV-STAR Development Board Overview`_ to get basic information
of this board.

.. _design_board_gd32vf103v_rvstar_setup:

Setup
-----

Follow the guide in `GD32VF103V RV-STAR Development Kit`_ to setup the board,
make sure the following items are set correctly:

* Connect the USB Type-C port on board to your PC in order to download and
  debug programs and monitor the UART message.
* Following steps in `RV-STAR user manual`_ to setup JTAG drivers for your development environment

.. _design_board_gd32vf103v_rvstar_usage:

How to use
----------

For **GD32VF103V RV-STAR** board, the **DOWNLOAD** and **CORE** variables
are fixed to ``flashxip`` and ``n205``.

* You can find its linker script in ``SoC/gd32vf103/Board/gd32vf103v_rvstar/Source/GCC/``

  - ``gcc_gd32vf103_flashxip.ld``: Linker script file for ``DOWNLOAD=flashxip``

* If you want to specify your own modified linker script, you can follow steps described in :ref:`develop_appdev_linkscript`
* You can find its openocd configuration file in ``SoC/gd32vf103/Board/gd32vf103v_rvstar/openocd_gd32vf103.cfg``

To run this application in GD32VF103V RV-STAR board in Nuclei SDK,
you just need to use this **SOC** and **BOARD** variables.

.. code-block:: shell

    # Clean the application
    make SOC=gd32vf103 BOARD=gd32vf103v_rvstar clean
    # Build the application
    make SOC=gd32vf103 BOARD=gd32vf103v_rvstar all
    # Upload the application using openocd and gdb
    make SOC=gd32vf103 BOARD=gd32vf103v_rvstar upload
    # Debug the application using openocd and gdb
    make SOC=gd32vf103 BOARD=gd32vf103v_rvstar debug

.. _GD32VF103V RV-STAR Development Kit: https://nucleisys.com/developboard.php
.. _RV-STAR Development Board Overview: https://doc.nucleisys.com/nuclei_board_labs/hw/hw.html#rv-star
.. _RV-STAR user manual: https://doc.nucleisys.com/nuclei_board_labs/hw/hw.html#on-board-debugger-driver
