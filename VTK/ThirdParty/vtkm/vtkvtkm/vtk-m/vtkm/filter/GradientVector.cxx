//============================================================================
//  Copyright (c) Kitware, Inc.
//  All rights reserved.
//  See LICENSE.txt for details.
//
//  This software is distributed WITHOUT ANY WARRANTY; without even
//  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
//  PURPOSE.  See the above copyright notice for more information.
//============================================================================

#ifndef vtk_m_filter_Gradient_cxx
#define vtk_m_filter_Gradient_cxx

#include <vtkm/filter/Gradient.h>

namespace vtkm
{
namespace filter
{
template VTKM_FILTER_GRADIENT_EXPORT vtkm::cont::DataSet Gradient::DoExecute(
  const vtkm::cont::DataSet&,
  const vtkm::cont::ArrayHandle<vtkm::Vec3f_32>&,
  const vtkm::filter::FieldMetadata&,
  vtkm::filter::PolicyBase<vtkm::filter::PolicyDefault>);

#ifndef VTKM_NO_DEPRECATED_VIRTUAL
VTKM_DEPRECATED_SUPPRESS_BEGIN
template VTKM_FILTER_GRADIENT_EXPORT vtkm::cont::DataSet Gradient::DoExecute(
  const vtkm::cont::DataSet&,
  const vtkm::cont::ArrayHandle<vtkm::Vec3f_32, vtkm::cont::StorageTagVirtual>&,
  const vtkm::filter::FieldMetadata&,
  vtkm::filter::PolicyBase<vtkm::filter::PolicyDefault>);
VTKM_DEPRECATED_SUPPRESS_END
#endif

template VTKM_FILTER_GRADIENT_EXPORT vtkm::cont::DataSet Gradient::DoExecute(
  const vtkm::cont::DataSet&,
  const vtkm::cont::ArrayHandle<vtkm::Vec3f_64>&,
  const vtkm::filter::FieldMetadata&,
  vtkm::filter::PolicyBase<vtkm::filter::PolicyDefault>);

#ifndef VTKM_NO_DEPRECATED_VIRTUAL
VTKM_DEPRECATED_SUPPRESS_BEGIN
template VTKM_FILTER_GRADIENT_EXPORT vtkm::cont::DataSet Gradient::DoExecute(
  const vtkm::cont::DataSet&,
  const vtkm::cont::ArrayHandle<vtkm::Vec3f_64, vtkm::cont::StorageTagVirtual>&,
  const vtkm::filter::FieldMetadata&,
  vtkm::filter::PolicyBase<vtkm::filter::PolicyDefault>);
VTKM_DEPRECATED_SUPPRESS_END
#endif
}
}

#endif
