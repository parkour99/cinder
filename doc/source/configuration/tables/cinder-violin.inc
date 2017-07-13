..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-violin:

.. list-table:: Description of Violin volume driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``violin_dedup_capable_pools`` =
     - (List) Storage pools capable of dedup and other luns.(Comma separated list)
   * - ``violin_dedup_only_pools`` =
     - (List) Storage pools to be used to setup dedup luns only.(Comma separated list)
   * - ``violin_iscsi_target_ips`` =
     - (List) Target iSCSI addresses to use.(Comma separated list)
   * - ``violin_pool_allocation_method`` = ``random``
     - (String) Method of choosing a storage pool for a lun.
   * - ``violin_request_timeout`` = ``300``
     - (Integer) Global backend request timeout, in seconds.