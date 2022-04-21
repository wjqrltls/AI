/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
class VectorTransferOpInterface;
namespace detail {
struct VectorTransferOpInterfaceInterfaceTraits {
  struct Concept {
    StringRef (*getInBoundsAttrName)();
    StringRef (*getPermutationMapAttrName)();
    bool (*isDimInBounds)(const Concept *impl, ::mlir::Operation *, unsigned);
    Value (*source)(const Concept *impl, ::mlir::Operation *);
    Value (*vector)(const Concept *impl, ::mlir::Operation *);
    ValueRange (*indices)(const Concept *impl, ::mlir::Operation *);
    AffineMap (*permutation_map)(const Concept *impl, ::mlir::Operation *);
    bool (*isBroadcastDim)(const Concept *impl, ::mlir::Operation *, unsigned);
    bool (*hasBroadcastDim)(const Concept *impl, ::mlir::Operation *);
    Optional<ArrayAttr> (*in_bounds)(const Concept *impl, ::mlir::Operation *);
    ShapedType (*getShapedType)(const Concept *impl, ::mlir::Operation *);
    VectorType (*getVectorType)(const Concept *impl, ::mlir::Operation *);
    VectorType (*getMaskType)(const Concept *impl, ::mlir::Operation *);
    unsigned (*getTransferRank)(const Concept *impl, ::mlir::Operation *);
    unsigned (*getLeadingShapedRank)(const Concept *impl, ::mlir::Operation *);
    bool (*hasOutOfBoundsDim)(const Concept *impl, ::mlir::Operation *);
    void (*zipResultAndIndexing)(const Concept *impl, ::mlir::Operation *, llvm::function_ref<void(int64_t, int64_t)>);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::VectorTransferOpInterface;
    Model() : Concept{getInBoundsAttrName, getPermutationMapAttrName, isDimInBounds, source, vector, indices, permutation_map, isBroadcastDim, hasBroadcastDim, in_bounds, getShapedType, getVectorType, getMaskType, getTransferRank, getLeadingShapedRank, hasOutOfBoundsDim, zipResultAndIndexing} {}

    static inline StringRef getInBoundsAttrName();
    static inline StringRef getPermutationMapAttrName();
    static inline bool isDimInBounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned dim);
    static inline Value source(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline Value vector(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ValueRange indices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline AffineMap permutation_map(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned idx);
    static inline bool hasBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline Optional<ArrayAttr> in_bounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ShapedType getShapedType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getVectorType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getMaskType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline unsigned getTransferRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline unsigned getLeadingShapedRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasOutOfBoundsDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void zipResultAndIndexing(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::VectorTransferOpInterface;
    FallbackModel() : Concept{getInBoundsAttrName, getPermutationMapAttrName, isDimInBounds, source, vector, indices, permutation_map, isBroadcastDim, hasBroadcastDim, in_bounds, getShapedType, getVectorType, getMaskType, getTransferRank, getLeadingShapedRank, hasOutOfBoundsDim, zipResultAndIndexing} {}

    static inline StringRef getInBoundsAttrName();
    static inline StringRef getPermutationMapAttrName();
    static inline bool isDimInBounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned dim);
    static inline Value source(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline Value vector(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ValueRange indices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline AffineMap permutation_map(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned idx);
    static inline bool hasBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline Optional<ArrayAttr> in_bounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ShapedType getShapedType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getVectorType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getMaskType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline unsigned getTransferRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline unsigned getLeadingShapedRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasOutOfBoundsDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void zipResultAndIndexing(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    static StringRef getInBoundsAttrName();
    static StringRef getPermutationMapAttrName();
    bool isDimInBounds(::mlir::Operation *tablegen_opaque_val, unsigned dim) const;
    bool isBroadcastDim(::mlir::Operation *tablegen_opaque_val, unsigned idx) const;
    bool hasBroadcastDim(::mlir::Operation *tablegen_opaque_val) const;
    ShapedType getShapedType(::mlir::Operation *tablegen_opaque_val) const;
    VectorType getVectorType(::mlir::Operation *tablegen_opaque_val) const;
    VectorType getMaskType(::mlir::Operation *tablegen_opaque_val) const;
    unsigned getTransferRank(::mlir::Operation *tablegen_opaque_val) const;
    unsigned getLeadingShapedRank(::mlir::Operation *tablegen_opaque_val) const;
    bool hasOutOfBoundsDim(::mlir::Operation *tablegen_opaque_val) const;
    void zipResultAndIndexing(::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun) const;
  };
};template <typename ConcreteOp>
struct VectorTransferOpInterfaceTrait;

} // end namespace detail
class VectorTransferOpInterface : public ::mlir::OpInterface<VectorTransferOpInterface, detail::VectorTransferOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<VectorTransferOpInterface, detail::VectorTransferOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::VectorTransferOpInterfaceTrait<ConcreteOp> {};
  StringRef getInBoundsAttrName();
  StringRef getPermutationMapAttrName();
  bool isDimInBounds(unsigned dim);
  Value source();
  Value vector();
  ValueRange indices();
  AffineMap permutation_map();
  bool isBroadcastDim(unsigned idx);
  bool hasBroadcastDim();
  Optional<ArrayAttr> in_bounds();
  ShapedType getShapedType();
  VectorType getVectorType();
  VectorType getMaskType();
  unsigned getTransferRank();
  unsigned getLeadingShapedRank();
  bool hasOutOfBoundsDim();
  void zipResultAndIndexing(llvm::function_ref<void(int64_t, int64_t)> fun);
};
namespace detail {
  template <typename ConcreteOp>
  struct VectorTransferOpInterfaceTrait : public ::mlir::OpInterface<VectorTransferOpInterface, detail::VectorTransferOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    static StringRef getInBoundsAttrName() {
      return "in_bounds";
    }
    static StringRef getPermutationMapAttrName() {
      return "permutation_map";
    }
    bool isDimInBounds(unsigned dim) {
      return (*static_cast<ConcreteOp *>(this)).isBroadcastDim(dim)
            || ((*static_cast<ConcreteOp *>(this)).in_bounds()
                && (*static_cast<ConcreteOp *>(this)).in_bounds()->template cast<ArrayAttr>()[dim]
                                    .template cast<BoolAttr>().getValue());
    }
    bool isBroadcastDim(unsigned idx) {
      auto expr = (*static_cast<ConcreteOp *>(this)).permutation_map().getResult(idx);
        return expr.template isa<AffineConstantExpr>() &&
               expr.template dyn_cast<AffineConstantExpr>().getValue() == 0;
    }
    bool hasBroadcastDim() {
      for (unsigned i = 0; i < (*static_cast<ConcreteOp *>(this)).permutation_map().getNumResults(); ++i) {
          if ((*static_cast<ConcreteOp *>(this)).isBroadcastDim(i))
            return true;
        }
        return false;
    }
    ShapedType getShapedType() {
      return (*static_cast<ConcreteOp *>(this)).source().getType().template cast<ShapedType>();
    }
    VectorType getVectorType() {
      return (*static_cast<ConcreteOp *>(this)).vector().getType().template dyn_cast<VectorType>();
    }
    VectorType getMaskType() {
      return (*static_cast<ConcreteOp *>(this)).mask()
            ? mlir::vector::detail::transferMaskType(
                (*static_cast<ConcreteOp *>(this)).getVectorType(), (*static_cast<ConcreteOp *>(this)).permutation_map())
            : VectorType();
    }
    unsigned getTransferRank() {
      return (*static_cast<ConcreteOp *>(this)).permutation_map().getNumResults();
    }
    unsigned getLeadingShapedRank() {
      return (*static_cast<ConcreteOp *>(this)).getShapedType().getRank() - (*static_cast<ConcreteOp *>(this)).getTransferRank();
    }
    bool hasOutOfBoundsDim() {
      for (unsigned idx = 0, e = (*static_cast<ConcreteOp *>(this)).getTransferRank(); idx < e; ++idx)
          if (!(*static_cast<ConcreteOp *>(this)).isDimInBounds(idx))
            return true;
        return false;
    }
    void zipResultAndIndexing(llvm::function_ref<void(int64_t, int64_t)> fun) {
      for (int64_t resultIdx = 0,
                   indicesIdx = (*static_cast<ConcreteOp *>(this)).getLeadingShapedRank(),
                   eResult = (*static_cast<ConcreteOp *>(this)).getTransferRank();
           resultIdx < eResult;
           ++resultIdx, ++indicesIdx)
        fun(resultIdx, indicesIdx);
    }
  };
}// namespace detail
template<typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getInBoundsAttrName() {
  return ConcreteOp::getInBoundsAttrName();
}
template<typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getPermutationMapAttrName() {
  return ConcreteOp::getPermutationMapAttrName();
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::isDimInBounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned dim) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isDimInBounds(dim);
}
template<typename ConcreteOp>
Value detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::source(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).source();
}
template<typename ConcreteOp>
Value detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::vector(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).vector();
}
template<typename ConcreteOp>
ValueRange detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::indices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).indices();
}
template<typename ConcreteOp>
AffineMap detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::permutation_map(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).permutation_map();
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::isBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned idx) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isBroadcastDim(idx);
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::hasBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasBroadcastDim();
}
template<typename ConcreteOp>
Optional<ArrayAttr> detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::in_bounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).in_bounds();
}
template<typename ConcreteOp>
ShapedType detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getShapedType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getShapedType();
}
template<typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getVectorType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getVectorType();
}
template<typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getMaskType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getMaskType();
}
template<typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getTransferRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTransferRank();
}
template<typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::getLeadingShapedRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getLeadingShapedRank();
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::hasOutOfBoundsDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasOutOfBoundsDim();
}
template<typename ConcreteOp>
void detail::VectorTransferOpInterfaceInterfaceTraits::Model<ConcreteOp>::zipResultAndIndexing(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).zipResultAndIndexing(fun);
}
template<typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getInBoundsAttrName() {
  return ConcreteOp::getInBoundsAttrName();
}
template<typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getPermutationMapAttrName() {
  return ConcreteOp::getPermutationMapAttrName();
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::isDimInBounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned dim) {
  return static_cast<const ConcreteOp *>(impl)->isDimInBounds(tablegen_opaque_val, dim);
}
template<typename ConcreteOp>
Value detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::source(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->source(tablegen_opaque_val);
}
template<typename ConcreteOp>
Value detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::vector(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->vector(tablegen_opaque_val);
}
template<typename ConcreteOp>
ValueRange detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::indices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->indices(tablegen_opaque_val);
}
template<typename ConcreteOp>
AffineMap detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::permutation_map(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->permutation_map(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::isBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, unsigned idx) {
  return static_cast<const ConcreteOp *>(impl)->isBroadcastDim(tablegen_opaque_val, idx);
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasBroadcastDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasBroadcastDim(tablegen_opaque_val);
}
template<typename ConcreteOp>
Optional<ArrayAttr> detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::in_bounds(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->in_bounds(tablegen_opaque_val);
}
template<typename ConcreteOp>
ShapedType detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getShapedType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getShapedType(tablegen_opaque_val);
}
template<typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getVectorType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getVectorType(tablegen_opaque_val);
}
template<typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getMaskType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getMaskType(tablegen_opaque_val);
}
template<typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getTransferRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getTransferRank(tablegen_opaque_val);
}
template<typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getLeadingShapedRank(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getLeadingShapedRank(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasOutOfBoundsDim(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasOutOfBoundsDim(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::VectorTransferOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::zipResultAndIndexing(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun) {
  return static_cast<const ConcreteOp *>(impl)->zipResultAndIndexing(tablegen_opaque_val, fun);
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getInBoundsAttrName() {
return "in_bounds";
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getPermutationMapAttrName() {
return "permutation_map";
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::isDimInBounds(::mlir::Operation *tablegen_opaque_val, unsigned dim) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isBroadcastDim(dim)
            || ((llvm::cast<ConcreteOp>(tablegen_opaque_val)).in_bounds()
                && (llvm::cast<ConcreteOp>(tablegen_opaque_val)).in_bounds()->template cast<ArrayAttr>()[dim]
                                    .template cast<BoolAttr>().getValue());
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::isBroadcastDim(::mlir::Operation *tablegen_opaque_val, unsigned idx) const {
auto expr = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).permutation_map().getResult(idx);
        return expr.template isa<AffineConstantExpr>() &&
               expr.template dyn_cast<AffineConstantExpr>().getValue() == 0;
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasBroadcastDim(::mlir::Operation *tablegen_opaque_val) const {
for (unsigned i = 0; i < (llvm::cast<ConcreteOp>(tablegen_opaque_val)).permutation_map().getNumResults(); ++i) {
          if ((llvm::cast<ConcreteOp>(tablegen_opaque_val)).isBroadcastDim(i))
            return true;
        }
        return false;
}
template<typename ConcreteModel, typename ConcreteOp>
ShapedType detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getShapedType(::mlir::Operation *tablegen_opaque_val) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).source().getType().template cast<ShapedType>();
}
template<typename ConcreteModel, typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getVectorType(::mlir::Operation *tablegen_opaque_val) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).vector().getType().template dyn_cast<VectorType>();
}
template<typename ConcreteModel, typename ConcreteOp>
VectorType detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getMaskType(::mlir::Operation *tablegen_opaque_val) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).mask()
            ? mlir::vector::detail::transferMaskType(
                (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getVectorType(), (llvm::cast<ConcreteOp>(tablegen_opaque_val)).permutation_map())
            : VectorType();
}
template<typename ConcreteModel, typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getTransferRank(::mlir::Operation *tablegen_opaque_val) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).permutation_map().getNumResults();
}
template<typename ConcreteModel, typename ConcreteOp>
unsigned detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getLeadingShapedRank(::mlir::Operation *tablegen_opaque_val) const {
return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getShapedType().getRank() - (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTransferRank();
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasOutOfBoundsDim(::mlir::Operation *tablegen_opaque_val) const {
for (unsigned idx = 0, e = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTransferRank(); idx < e; ++idx)
          if (!(llvm::cast<ConcreteOp>(tablegen_opaque_val)).isDimInBounds(idx))
            return true;
        return false;
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::VectorTransferOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::zipResultAndIndexing(::mlir::Operation *tablegen_opaque_val, llvm::function_ref<void(int64_t, int64_t)> fun) const {
for (int64_t resultIdx = 0,
                   indicesIdx = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getLeadingShapedRank(),
                   eResult = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTransferRank();
           resultIdx < eResult;
           ++resultIdx, ++indicesIdx)
        fun(resultIdx, indicesIdx);
}
} // namespace mlir
namespace mlir {
class VectorUnrollOpInterface;
namespace detail {
struct VectorUnrollOpInterfaceInterfaceTraits {
  struct Concept {
    Optional<SmallVector<int64_t, 4>> (*getShapeForUnroll)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::VectorUnrollOpInterface;
    Model() : Concept{getShapeForUnroll} {}

    static inline Optional<SmallVector<int64_t, 4>> getShapeForUnroll(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::VectorUnrollOpInterface;
    FallbackModel() : Concept{getShapeForUnroll} {}

    static inline Optional<SmallVector<int64_t, 4>> getShapeForUnroll(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    Optional<SmallVector<int64_t, 4>> getShapeForUnroll(::mlir::Operation *tablegen_opaque_val) const;
  };
};template <typename ConcreteOp>
struct VectorUnrollOpInterfaceTrait;

} // end namespace detail
class VectorUnrollOpInterface : public ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::VectorUnrollOpInterfaceTrait<ConcreteOp> {};
  Optional<SmallVector<int64_t, 4>> getShapeForUnroll();
};
namespace detail {
  template <typename ConcreteOp>
  struct VectorUnrollOpInterfaceTrait : public ::mlir::OpInterface<VectorUnrollOpInterface, detail::VectorUnrollOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    Optional<SmallVector<int64_t, 4>> getShapeForUnroll() {
      assert((*static_cast<ConcreteOp *>(this))->getNumResults() == 1);
        auto vt = (*static_cast<ConcreteOp *>(this)).getResult().getType().
          template dyn_cast<VectorType>();
        if (!vt)
          return None;
        SmallVector<int64_t, 4> res(vt.getShape().begin(), vt.getShape().end());
        return res;
    }
  };
}// namespace detail
template<typename ConcreteOp>
Optional<SmallVector<int64_t, 4>> detail::VectorUnrollOpInterfaceInterfaceTraits::Model<ConcreteOp>::getShapeForUnroll(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getShapeForUnroll();
}
template<typename ConcreteOp>
Optional<SmallVector<int64_t, 4>> detail::VectorUnrollOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getShapeForUnroll(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getShapeForUnroll(tablegen_opaque_val);
}
template<typename ConcreteModel, typename ConcreteOp>
Optional<SmallVector<int64_t, 4>> detail::VectorUnrollOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getShapeForUnroll(::mlir::Operation *tablegen_opaque_val) const {
assert((llvm::cast<ConcreteOp>(tablegen_opaque_val))->getNumResults() == 1);
        auto vt = (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getResult().getType().
          template dyn_cast<VectorType>();
        if (!vt)
          return None;
        SmallVector<int64_t, 4> res(vt.getShape().begin(), vt.getShape().end());
        return res;
}
} // namespace mlir