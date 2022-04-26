# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from tensorboard.uploader.proto import export_service_pb2 as tensorboard_dot_uploader_dot_proto_dot_export__service__pb2


class TensorBoardExporterServiceStub(object):
  """Service for exporting data from TensorBoard.dev.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.StreamExperiments = channel.unary_stream(
        '/tensorboard.service.TensorBoardExporterService/StreamExperiments',
        request_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentsRequest.SerializeToString,
        response_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentsResponse.FromString,
        )
    self.StreamExperimentData = channel.unary_stream(
        '/tensorboard.service.TensorBoardExporterService/StreamExperimentData',
        request_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentDataRequest.SerializeToString,
        response_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentDataResponse.FromString,
        )
    self.StreamBlobData = channel.unary_stream(
        '/tensorboard.service.TensorBoardExporterService/StreamBlobData',
        request_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamBlobDataRequest.SerializeToString,
        response_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamBlobDataResponse.FromString,
        )


class TensorBoardExporterServiceServicer(object):
  """Service for exporting data from TensorBoard.dev.
  """

  def StreamExperiments(self, request, context):
    """Stream the experiment_id of all the experiments owned by the caller.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def StreamExperimentData(self, request, context):
    """Stream scalars for all the runs and tags in an experiment.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def StreamBlobData(self, request, context):
    """Stream blob as chunks for a given blob_id.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_TensorBoardExporterServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'StreamExperiments': grpc.unary_stream_rpc_method_handler(
          servicer.StreamExperiments,
          request_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentsRequest.FromString,
          response_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentsResponse.SerializeToString,
      ),
      'StreamExperimentData': grpc.unary_stream_rpc_method_handler(
          servicer.StreamExperimentData,
          request_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentDataRequest.FromString,
          response_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamExperimentDataResponse.SerializeToString,
      ),
      'StreamBlobData': grpc.unary_stream_rpc_method_handler(
          servicer.StreamBlobData,
          request_deserializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamBlobDataRequest.FromString,
          response_serializer=tensorboard_dot_uploader_dot_proto_dot_export__service__pb2.StreamBlobDataResponse.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'tensorboard.service.TensorBoardExporterService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
