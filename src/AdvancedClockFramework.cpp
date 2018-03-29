/*****************************************************************************
Arduino advanced time measurement and visualization framework

MIT License

Copyright (c) 2018 Tullio Benzi

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*****************************************************************************/

#include <AdvancedClockFramework.h>

//////////////////////////////////////////////////////////////////////////////
// Default constructor
AdvancedClockFramework::AdvancedClockFramework()
{
  m_initialized = false;
  m_bluetoothActive = false;
  m_serialActive = false;
}

//////////////////////////////////////////////////////////////////////////////
// Destructor
AdvancedClockFramework::~AdvancedClockFramework()
{
}

//////////////////////////////////////////////////////////////////////////////
// Updates all internal information and handles inputs
bool AdvancedClockFramework::Update()
{
  return true;
}

//////////////////////////////////////////////////////////////////////////////
// Visualization function, to be overriden by specific implementation
bool AdvancedClockFramework::WriteOutputs()
{
  bool success = Update();
  // TODO overriden function must do here what needed to print clock output 
  return success;
}

//////////////////////////////////////////////////////////////////////////////
// Gets date
bool AdvancedClockFramework::GetDate(
  int & day,
  int & month,
  int & year,
  bool & daylightSavingTime)
{
  // Check if initialization was successful
  if(!m_initialized)
  {
    return false;
  }
  
  return true;
}

//////////////////////////////////////////////////////////////////////////////
// Gets time
bool AdvancedClockFramework::GetTime(int & hours, int & minutes, int & seconds)
{
  // Check if initialization was successful
  if(!m_initialized)
  {
    return false;
  }
  
  return true;
}