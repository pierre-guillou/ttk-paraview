//============================================================================
//  Copyright (c) Kitware, Inc.
//  All rights reserved.
//  See LICENSE.txt for details.
//
//  This software is distributed WITHOUT ANY WARRANTY; without even
//  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
//  PURPOSE.  See the above copyright notice for more information.
//============================================================================

#ifndef vtk_m_cont_openmp_internal_ArrayManagerExecutionOpenMP_h
#define vtk_m_cont_openmp_internal_ArrayManagerExecutionOpenMP_h


#include <vtkm/cont/openmp/internal/DeviceAdapterTagOpenMP.h>

#include <vtkm/cont/internal/ArrayManagerExecution.h>
#include <vtkm/cont/internal/ArrayManagerExecutionShareWithControl.h>

namespace vtkm
{
namespace cont
{
namespace internal
{

template <typename T, class StorageTag>
class ArrayManagerExecution<T, StorageTag, vtkm::cont::DeviceAdapterTagOpenMP>
  : public vtkm::cont::internal::ArrayManagerExecutionShareWithControl<T, StorageTag>
{
public:
  using Superclass = vtkm::cont::internal::ArrayManagerExecutionShareWithControl<T, StorageTag>;
  using ValueType = typename Superclass::ValueType;
  using PortalType = typename Superclass::PortalType;
  using PortalConstType = typename Superclass::PortalConstType;
  using StorageType = typename Superclass::StorageType;

  VTKM_CONT
  ArrayManagerExecution(StorageType* storage)
    : Superclass(storage)
  {
  }

  VTKM_CONT
  PortalConstType PrepareForInput(bool updateData, vtkm::cont::Token& token)
  {
    return this->Superclass::PrepareForInput(updateData, token);
  }

  VTKM_CONT
  PortalType PrepareForInPlace(bool updateData, vtkm::cont::Token& token)
  {
    return this->Superclass::PrepareForInPlace(updateData, token);
  }

  VTKM_CONT
  PortalType PrepareForOutput(vtkm::Id numberOfValues, vtkm::cont::Token& token)
  {
    return this->Superclass::PrepareForOutput(numberOfValues, token);
  }
};
}
}
} // namespace vtkm::cont::internal

#endif // vtk_m_cont_openmp_internal_ArrayManagerExecutionOpenMP_h
