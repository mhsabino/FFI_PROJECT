module SumOfMultiplesOfThreeAndFive
  extend FFI::Library
  ffi_lib "./sumOfMultiplesOfThreeAndFive.so"
  attach_function :sumOfMultiplesOfThreeAndFive, [:int], :int
end
