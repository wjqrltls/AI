/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class DialectAsmParser;
class DialectAsmPrinter;
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
  class SparseTensorEncodingAttr;

  namespace detail {
    struct SparseTensorEncodingAttrStorage;
  } // end namespace detail
  class SparseTensorEncodingAttr : public ::mlir::Attribute::AttrBase<SparseTensorEncodingAttr, ::mlir::Attribute,
                                         detail::SparseTensorEncodingAttrStorage, ::mlir::VerifiableTensorEncoding::Trait> {
  public:
    /// Inherit some necessary constructors from 'AttrBase'.
    using Base::Base;


    // Dimension level types that define sparse tensors:
    //   Dense      - dimension is dense, every entry is stored
    //   Compressed - dimension is sparse, only nonzeros are stored
    //   Singleton  - dimension contains single coordinate, no siblings
    enum class DimLevelType {
      Dense, Compressed, Singleton
    };
  
    static SparseTensorEncodingAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<SparseTensorEncodingAttr::DimLevelType> dimLevelType, AffineMap dimOrdering, unsigned pointerBitWidth, unsigned indexBitWidth);
    static SparseTensorEncodingAttr getChecked(llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<SparseTensorEncodingAttr::DimLevelType> dimLevelType, AffineMap dimOrdering, unsigned pointerBitWidth, unsigned indexBitWidth);

    using Base::getChecked;
    static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<SparseTensorEncodingAttr::DimLevelType> dimLevelType, AffineMap dimOrdering, unsigned pointerBitWidth, unsigned indexBitWidth);
    static constexpr ::llvm::StringLiteral getMnemonic() {
      return ::llvm::StringLiteral("encoding");
    }

    static ::mlir::Attribute parse(::mlir::MLIRContext *context,
                             ::mlir::DialectAsmParser &parser, ::mlir::Type type);
    void print(::mlir::DialectAsmPrinter &printer) const;
    ::llvm::ArrayRef<SparseTensorEncodingAttr::DimLevelType> getDimLevelType() const;
    AffineMap getDimOrdering() const;
    unsigned getPointerBitWidth() const;
    unsigned getIndexBitWidth() const;
    ::mlir::LogicalResult verifyEncoding(ArrayRef<int64_t> shape, Type elementType, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) const;
  };
} // namespace sparse_tensor
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES
