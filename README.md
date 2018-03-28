# Advanced Time Measurement and Visualization Framework
A framework to build advanced time measure and visualization with real time clock driver, bluetooth and manual (buttons) based interfaces. 

## Description

## Usage
1. Create your Arduino sketch file
2. Declare a `AdvancedClockFramework` global object
3. On the `setup` routine of your sketch file, configure the `AdvancedClockFramework` object
4. Remember to call `AdvancedClockFramework::Update()` every iteration of `loop` routine
5. Add to `loop` routine `AdvancedClockFramework::GetDate()` or `AdvancedClockFramework::GetTime()` calls
5. Add to `loop` routine your visualization code